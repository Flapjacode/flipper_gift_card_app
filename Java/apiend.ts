@RestController
@RequestMapping("/api/giftcards")
public class GiftCardController {

    @PostMapping("/activate")
    public ResponseEntity<String> activateGiftCard(@RequestBody String cardCode) {
        boolean success = activateGiftCard(cardCode);
        if (success) {
            return ResponseEntity.ok("Gift card activated successfully!");
        } else {
            return ResponseEntity.status(HttpStatus.BAD_REQUEST).body("Invalid gift card code.");
        }
    }
}
