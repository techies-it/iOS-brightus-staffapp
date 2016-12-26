// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import AVFoundation;
@import Foundation;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC24BrightUs_StaffAttendance11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;
@class UIBarButtonItem;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC24BrightUs_StaffAttendance18BaseViewController")
@interface BaseViewController : UIViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)slideMenuItemSelectedAtIndex:(int32_t)index;
- (void)addSlideMenuButton;
- (UIImage * _Nonnull)defaultMenuImage;
- (void)onSlideMenuButtonPressed:(UIBarButtonItem * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class AVCaptureSession;
@class AVCaptureVideoPreviewLayer;
@class UIView;
@class AVCaptureOutput;
@class AVCaptureConnection;

SWIFT_CLASS("_TtC24BrightUs_StaffAttendance6Camera")
@interface Camera : UIViewController <AVCaptureMetadataOutputObjectsDelegate>
@property (nonatomic, strong) AVCaptureSession * _Nullable objCaptureSession;
@property (nonatomic, strong) AVCaptureVideoPreviewLayer * _Nullable objCaptureVideoPreviewLayer;
@property (nonatomic, strong) UIView * _Nullable vwQRCode;
@property (nonatomic, copy) NSString * _Nonnull attendanceStatus;
@property (nonatomic, copy) NSString * _Nonnull randomQRCode;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)configureVideoCapture;
- (void)addVideoPreviewLayer;
- (void)initializeQRView SWIFT_METHOD_FAMILY(none);
- (void)captureOutput:(AVCaptureOutput * _Null_unspecified)captureOutput didOutputMetadataObjects:(NSArray * _Null_unspecified)metadataObjects fromConnection:(AVCaptureConnection * _Null_unspecified)connection;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UILabel;
@class UIButton;

SWIFT_CLASS("_TtC24BrightUs_StaffAttendance13DashboardView")
@interface DashboardView : UIViewController
/**
  Current Date will be displayed on this label
*/
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified currentDateLabel;
/**
  Greet user
*/
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified greetingLabel;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
/**
  Attendance Detail Button Action
  \param description When user tap this button, app navigates to attendance detail section

*/
- (IBAction)AttendanceDetailButtonAction:(UIButton * _Nonnull)sender;
- (IBAction)ViewProfile:(UIButton * _Nonnull)sender;
/**
  Specify date format Methods
  \param return Returns String Value in format of Day, Date Month

*/
- (NSString * _Nonnull)CurrentDateFormat;
/**
  Greet User Methods
  \param description Method check the current time range and display morning, afternoon, night etc according to that.

*/
- (void)DisplayGreetings;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class NSMutableArray;
@class UITableViewCell;

/**
  Attendance Details
*/
SWIFT_CLASS("_TtC24BrightUs_StaffAttendance21DetailsViewController")
@interface DetailsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) IBOutlet UITableView * _Null_unspecified detailTableView;
@property (nonatomic, strong) NSMutableArray * _Nonnull attendanceDetailArray;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (IBAction)BackButtonAction:(UIBarButtonItem * _Nonnull)sender;
/**
  Number of Sections in TableView
  \param return number of sections

*/
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
/**
  Number of Rows in Section
  \param return number of rows in one section

*/
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
/**
  Definition of Cell
  \param return TiiAttendanceDetailCell

  \param defined _Terms : particularDate, checkinTime, checkOutTime, totalTime

*/
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class HoshiTextField;
@class UIAlertController;
@class UITextField;

SWIFT_CLASS("_TtC24BrightUs_StaffAttendance24ForgotPassViewController")
@interface ForgotPassViewController : UIViewController <UITextFieldDelegate>
/**
  Email Text field
*/
@property (nonatomic, strong) IBOutlet HoshiTextField * _Null_unspecified emailTextField;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
/**
  Back Button Action
  \param description When user tap on back button, app will navigate to previous screen along with animation

*/
- (IBAction)BackButtonAction:(UIBarButtonItem * _Nonnull)sender;
/**
  Submit Button Action
  \param description performs action to receive email in order to recover the forgotten password

*/
- (IBAction)submitButton:(UIButton * _Nonnull)sender;
/**
  Validation Method
  \param return Return Bool value

  \param checks Empty email content, email format

*/
- (BOOL)Validation;
/**
  Alert Controller Method
  <ul>
    <li>
      paramter return : Returns UIAlertController
    </li>
  </ul>
  \param description Method to intialize and add actions to alert controller

*/
- (UIAlertController * _Nonnull)ShowAlert;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIScrollView;

SWIFT_CLASS("_TtC24BrightUs_StaffAttendance18HomeViewController")
@interface HomeViewController : BaseViewController <UIScrollViewDelegate>
@property (nonatomic, strong) IBOutlet UIScrollView * _Null_unspecified mainScrollView;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
/**
  Logout Action
  \param description User can logout from app via tapping on Logout Button

*/
- (IBAction)LogoutAction:(UIBarButtonItem * _Nonnull)sender;
/**
  Menu Button Action
  \param description Slider Menu will be shown to user

*/
- (IBAction)MenuButtonPressed:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/**
  A TextFieldEffects object is a control that displays editable text and contains the boilerplates to setup unique animations for text entrey and display. You typically use this class the same way you use UITextField.
*/
SWIFT_CLASS("_TtC24BrightUs_StaffAttendance16TextFieldEffects")
@interface TextFieldEffects : UITextField
/**
  UILabel that holds all the placeholder information
*/
@property (nonatomic, readonly, strong) UILabel * _Nonnull placeholderLabel;
/**
  Creates all the animations that are used to leave the textfield in the “entering text” state.
*/
- (void)animateViewsForTextEntry;
/**
  Creates all the animations that are used to leave the textfield in the “display input text” state.
*/
- (void)animateViewsForTextDisplay;
/**
  Draws the receiver’s image within the passed-in rectangle.
  \param rect The portion of the view’s bounds that needs to be updated.

*/
- (void)drawViewsForRect:(CGRect)rect;
- (void)updateViewsForBoundsChange:(CGRect)bounds;
- (void)drawRect:(CGRect)rect;
- (void)drawPlaceholderInRect:(CGRect)rect;
@property (nonatomic, copy) NSString * _Nullable text;
- (void)willMoveToSuperview:(UIView * _Null_unspecified)newSuperview;
/**
  The textfield has started an editing session.
*/
- (void)textFieldDidBeginEditing;
/**
  The textfield has ended an editing session.
*/
- (void)textFieldDidEndEditing;
- (void)prepareForInterfaceBuilder;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;

/**
  An HoshiTextField is a subclass of the TextFieldEffects object, is a control that displays an UITextField with a customizable visual effect around the lower edge of the control.
*/
SWIFT_CLASS("_TtC24BrightUs_StaffAttendance14HoshiTextField")
@interface HoshiTextField : TextFieldEffects
/**
  The color of the border when it has no content.
  This property applies a color to the lower edge of the control. The default value for this property is a clear color.
*/
@property (nonatomic, strong) UIColor * _Nullable borderInactiveColor;
/**
  The color of the border when it has content.
  This property applies a color to the lower edge of the control. The default value for this property is a clear color.
*/
@property (nonatomic, strong) UIColor * _Nullable borderActiveColor;
/**
  The color of the placeholder text.
  This property applies a color to the complete placeholder string. The default value for this property is a black color.
*/
@property (nonatomic, strong) UIColor * _Nonnull placeholderColor;
/**
  The scale of the placeholder font.
  This property determines the size of the placeholder label relative to the font size of the text field.
*/
@property (nonatomic) CGFloat placeholderFontScale;
@property (nonatomic, copy) NSString * _Nullable placeholder;
@property (nonatomic) CGRect bounds;
- (void)drawViewsForRect:(CGRect)rect;
- (void)animateViewsForTextEntry;
- (void)animateViewsForTextDisplay;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC24BrightUs_StaffAttendance23SlideMenuViewController")
@interface SlideMenuViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
/**
  Array to display menu options
*/
@property (nonatomic, strong) IBOutlet UITableView * _Null_unspecified tblMenuOptions;
/**
  Transparent button to hide menu
*/
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified btnCloseMenuOverlay;
/**
  Array containing menu options
*/
@property (nonatomic, copy) NSArray<NSDictionary<NSString *, NSString *> *> * _Nonnull arrayMenuOptions;
@property (nonatomic, strong) UIBarButtonItem * _Null_unspecified btnMenu;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewWillAppear:(BOOL)animated;
- (void)updateArrayMenuOptions;
- (IBAction)onCloseMenuClick:(UIBarButtonItem * _Null_unspecified)button;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/**
  Attendance Detail Cell
*/
SWIFT_CLASS("_TtC24BrightUs_StaffAttendance23TiiAttendanceDetailCell")
@interface TiiAttendanceDetailCell : UITableViewCell
/**
  Background panel in light gray color contains whole detail
*/
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified panelView;
/**
  Particular date is the date to which all the details in one panel will be related
*/
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified particularDate;
/**
  Check-In Time is the Time at which user entered in the premises
*/
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified checkinTime;
/**
  Check-out Time is the time at which user leaves the premises
*/
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified checkOutTime;
/**
  Total time will indicate the number of hours spent by user in BrightUs
*/
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified totalTime;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIStoryboardSegue;

/**
  Login View
*/
SWIFT_CLASS("_TtC24BrightUs_StaffAttendance14ViewController")
@interface ViewController : UIViewController <UITextFieldDelegate>
/**
  \param emailTextField Email entered by user in email textfield (Instead of UITextfield, it is inherited from HoshiTextField)

*/
@property (nonatomic, strong) IBOutlet HoshiTextField * _Null_unspecified emailTextField;
/**
  \code
  - parameter passTextField : Password entered by user in password textfield (Instead of UITextfield, it is inherited from HoshiTextField)

  \endcode*/
@property (nonatomic, strong) IBOutlet HoshiTextField * _Null_unspecified passwordTextField;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
/**
  Show Password in Text Format Action
  -parameter description : User can tap on eye to view password and then again to hide the same
*/
- (void)ShowPasswordActionWith_sender:(UIButton * _Nonnull)_sender;
/**
  Login Button Action
  \param description Check for Validate Email & Passwords

*/
- (IBAction)LoginButtonPressed:(UIButton * _Nonnull)sender;
/**
  Forgot Password Button Action
  \param description User can access this feature to create new password.

*/
- (IBAction)ForgotPasswordButtonPressed:(UIButton * _Nonnull)sender;
/**
  Validation Method
  \param return Bool to denote whether the content is valid or not.

  \param checks Empty email, Email format, Empty password

*/
- (BOOL)Validation;
/**
  Preparing Segue here
  \param description Method prepare segue with particular identifier provided

*/
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
/**
  ShowAlert - Common method to declare controller properties and actions
  \param return UIAlertController (to change title & messages later while using this method)

*/
- (UIAlertController * _Nonnull)ShowAlert;
/**
  Authorize User - Method for User to login into App along with authorization
  \param input client_id, client_secret, grant_type, username, password

  \param return token_type, expires_in, access_token, refresh_token

*/
- (void)AuthorizeUser;
/**
  Get Token For Firebase
  \param return token sent to firebase

*/
- (void)TokenForFirebase;
/**
  Login into Firebase
  \param description Sign into Firebase & navigate to Home View controller

*/
- (void)FirebaseLoginWithToken:(NSString * _Nonnull)token;
/**
  TextField Return Delegate
*/
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
