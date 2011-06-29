#import "NewAccountController.h"

@interface PreferencesController : NSWindowController <NSToolbarDelegate, NSTabViewDelegate, NewAccountControllerDelegate> {
    IBOutlet NSToolbar *toolbar;
    IBOutlet NSTabView *tabView;
    IBOutlet NSTableView *tableView;
}

- (id)initPreferencesController;
- (void)showPreferences;

- (IBAction)selectGeneralTab:(id)sender;
- (IBAction)selectAccountsTab:(id)sender;

- (IBAction)addAccount:(id)sender;
- (IBAction)removeAccount:(id)sender;

@end