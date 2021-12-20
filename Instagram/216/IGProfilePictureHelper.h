//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCaptureControllerDelegate-Protocol.h"
#import "IGMediaLibraryViewControllerDelegate-Protocol.h"
#import "IGProfilePictureHelping-Protocol.h"
#import "IGStoryCreationViewControllerNavigationDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"

@class IGFXProfileUpsellManager, IGMediaLibraryViewController, IGProfileBadgeActionLogger, IGUserSession, NSString, NSURL, UIViewController;
@protocol IGProfilePictureHelperDelegate;

@interface IGProfilePictureHelper : NSObject <IGCaptureControllerDelegate, IGMediaLibraryViewControllerDelegate, IGStoryCreationViewControllerNavigationDelegate, IGProfilePictureHelping, UIImagePickerControllerDelegate>
{
    NSString *_module;
    IGProfileBadgeActionLogger *_profileBadgeLogger;
    IGMediaLibraryViewController *_mediaLibraryVC;
    _Bool _showLocalOptionsOnly;
    id <IGProfilePictureHelperDelegate> _delegate;
    UIViewController *_viewController;
    IGFXProfileUpsellManager *_fxProfileUpsellManager;
    IGUserSession *_userSession;
    NSURL *_currentDownloadingImageURL;
    NSURL *_anonymousProfileImageUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *anonymousProfileImageUrl; // @synthesize anonymousProfileImageUrl=_anonymousProfileImageUrl;
@property(retain, nonatomic) NSURL *currentDownloadingImageURL; // @synthesize currentDownloadingImageURL=_currentDownloadingImageURL;
@property(nonatomic) _Bool showLocalOptionsOnly; // @synthesize showLocalOptionsOnly=_showLocalOptionsOnly;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGFXProfileUpsellManager *fxProfileUpsellManager; // @synthesize fxProfileUpsellManager=_fxProfileUpsellManager;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <IGProfilePictureHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (Optional_3f778f9c)_targetIdentityInfo;
- (void)_logReminderWithUserEvent:(int)arg1 type:(int)arg2;
- (_Bool)_areAccountsLinked;
- (_Bool)_shouldShowPhotoIsSyncedReminderForProfilePictureAction:(long long)arg1;
- (void)_updateHasShownReminder:(_Bool)arg1;
- (void)_handleManageSyncAction;
- (void)handleRemovePictureAction;
- (void)_handleImportFromLibrary;
- (void)_handlePresentCamera;
- (void)_showActionSheet:(id)arg1 withSubtitle:(id)arg2 withProfilePictureHeaderEnabled:(_Bool)arg3 withActions:(id)arg4;
- (void)showActionSheetWithMode:(long long)arg1 hasAnonymousProfilePicture:(_Bool)arg2;
- (id)_actionSheetControllerAvatarHeader;
- (id)_delegateTitleForAvatarPrompt;
- (void)_delegateDidTapUseAvatarOption;
- (_Bool)_delegateShouldShowUseAvatarOption;
- (void)_delegateShowReminderDialogWithCompletionHandler:(CDUnknownBlockType)arg1 profilePictureAction:(long long)arg2;
- (void)_delegateDidFailDownloadingProfilePicture;
- (void)_delegateDidFinishDownloadingProfilePicture:(id)arg1 fromOption:(long long)arg2;
- (void)_delegateDidFinishDownloadingProfilePictureWithURL:(id)arg1 fromOption:(long long)arg2;
- (void)_delegateWillStartDownloadingProfilePicture;
- (void)_delegateRemovePictureButtonTapped;
- (void)_delegateWillPerformAction:(long long)arg1;
- (void)_delegateDidFinishDownloadingAnonymousProfilePicture:(id)arg1;
- (_Bool)_delegateShouldShowRemoveCurrentPicture;
- (void)loadAnonymousProfilePicture;
- (void)_fetchAnonymousProfilePictureUrl:(CDUnknownBlockType)arg1;
- (void)_facebookAuthDidFinishWithAccessToken:(id)arg1;
- (void)_presentLoggedOutFacebookLogin;
- (void)_presentFacebookLogin;
- (void)_loadFacebookProfilePictureFromAccessToken:(id)arg1;
- (void)_loadFacebookProfilePictureWithFacebookUserInfo:(id)arg1 networker:(id)arg2;
- (void)mediaLibraryViewController:(id)arg1 didSharePanavisionComposition:(id)arg2 toDestination:(long long)arg3;
- (void)mediaLibraryViewControllerDidCancelNftMediaSelection:(id)arg1;
- (void)mediaLibraryViewController:(id)arg1 didFinishWithNftMedia:(id)arg2;
- (void)mediaLibraryViewController:(id)arg1 didFinishWithCompositionDraft:(id)arg2;
- (void)mediaLibraryViewController:(id)arg1 didFinishWithMediaDraft:(id)arg2;
- (void)mediaLibraryViewController:(id)arg1 didProduceComposition:(id)arg2;
- (void)mediaLibraryViewControllerDidCancel:(id)arg1;
- (void)captureControllerDidCancelCapture:(id)arg1;
- (void)captureController:(id)arg1 didConfirmVideoComposition:(id)arg2 mediaMetadata:(id)arg3;
- (void)captureController:(id)arg1 didUpdateVideoComposition:(id)arg2;
- (void)captureControllerDidEndFilmingClip:(id)arg1 hasClips:(_Bool)arg2;
- (void)captureControllerWillBeginFilmingClip:(id)arg1;
- (void)captureController:(id)arg1 didTakePhotoWithBuffer:(id)arg2 mediaMetadata:(id)arg3 deviceOrientation:(long long)arg4;
- (void)captureController:(id)arg1 willTakePhotoWithPreviewBuffer:(id)arg2 mediaMetadata:(id)arg3;
- (void)captureController:(id)arg1 didChangeToCameraMode:(long long)arg2;
- (void)creationViewController:(id)arg1 didDismissWithExitPoint:(long long)arg2 destination:(long long)arg3 storySendTarget:(long long)arg4 toDirectRecipients:(id)arg5 image:(id)arg6 storyModelArray:(id)arg7 metadataArray:(id)arg8;
- (_Bool)creationViewControllerIsDeallocatedAfterSending:(id)arg1;
- (void)creationViewController:(id)arg1 didSharePostToStory:(long long)arg2 didSharePostToDirect:(_Bool)arg3;
- (void)creationViewController:(id)arg1 didFinishWithExitPoint:(long long)arg2 shouldAnimateTransition:(_Bool)arg3;
- (void)creationViewController:(id)arg1 willShareToDirectRecipients:(id)arg2;
- (void)creationViewController:(id)arg1 didEnterState:(long long)arg2;
- (void)_presentCamera;
- (void)_presentPhotoLibrary;
- (void)_didChooseProfilePicture:(id)arg1 fromOrigin:(long long)arg2;
- (void)_dismissProfilePicturePickerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_importProfilePictureFromFacebookWithURL:(id)arg1 networker:(id)arg2;
- (void)_importProfilePictureFromFacebook;
- (void)_importProfilePictureFromLibrary;
- (id)initWithViewController:(id)arg1 userSession:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

