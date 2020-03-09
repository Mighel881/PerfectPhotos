#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import <CepheiPrefs/HBRootListController.h>
#import <CepheiPrefs/HBAppearanceSettings.h>
#import <Cephei/HBPreferences.h>

@interface PPTAppearanceSettings: HBAppearanceSettings
@end

@interface PPTRootListController: HBRootListController
{
    UITableView *_table;
}
@property(nonatomic, retain) UIBarButtonItem *closePhotosButton;
@property(nonatomic, retain) UIView *headerView;
@property(nonatomic, retain) UIImageView *headerImageView;
@property(nonatomic) float headerWidth;
@property(nonatomic) float headerHeight;
@property(nonatomic) float headerAspectRatio;
@property(nonatomic, retain) UILabel *titleLabel;
- (void)closePhotos;
@end

@interface MFMailComposeViewController: UINavigationController
+ (BOOL)canSendMail;
- (void)setMailComposeDelegate: (id)arg1;
- (id)mailComposeDelegate;
- (void)setToRecipients: (id)arg1;
@end