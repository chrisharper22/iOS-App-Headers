//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGBoostPostLogger, IGPromoteLoginHelper, IGPromoteMainFlowManager, IGUserSession, NSString, UIViewController;
@protocol IGPromoteFlowPathManagerDelegate;

@interface IGPromoteFlowPathManager : NSObject
{
    IGUserSession *_userSession;
    IGBoostPostLogger *_logger;
    NSString *_mediaId;
    _Bool _isSubflow;
    long long _promoteFlowState;
    NSString *_couponOfferId;
    NSString *_entryPoint;
    NSString *_aymtChannel;
    _Bool _isCTWAUpsell;
    long long _destinationType;
    unsigned long long _succeedLoginState;
    UIViewController *_fromViewController;
    IGPromoteMainFlowManager *_promoteFlowManager;
    IGPromoteLoginHelper *_promoteLoginHelper;
    _Bool _shouldPostToProfileFromDarkPost;
    id <IGPromoteFlowPathManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldPostToProfileFromDarkPost; // @synthesize shouldPostToProfileFromDarkPost=_shouldPostToProfileFromDarkPost;
@property(nonatomic) __weak id <IGPromoteFlowPathManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishCreatingPromotion;
- (void)exitMainFlow;
- (void)_presentLoginErrorViewControllerForError:(id)arg1;
- (void)_handleFailedLoginError:(id)arg1;
- (void)_navigateToNativeFlowFromEntryPoint:(long long)arg1 loginResponseDataModel:(id)arg2;
- (void)_navigateToPromotionRejectionDetails:(id)arg1;
- (void)_navigateToCampaignControlsWithPageId:(id)arg1 editCallback:(CDUnknownBlockType)arg2;
- (void)_navigateToPromotionInformation;
- (void)_handleLaunchPromotionWithMediaWithLoginState:(unsigned long long)arg1;
- (void)_launchPromotionInformationHandleFailureWithError:(id)arg1;
- (void)_launchPromotionInformationHandleSuccess;
- (void)_launchPromotionInformationHandleLogin;
- (void)launchPromotionInformationWithMediaId:(id)arg1 fromViewController:(id)arg2 entryPoint:(long long)arg3 logger:(id)arg4;
- (void)launchPromotionRejectionDetailsWithMediaId:(id)arg1 fromViewController:(id)arg2 entryPoint:(id)arg3 logger:(id)arg4;
- (void)launchCampaignControlsWithMediaId:(id)arg1 fromViewController:(id)arg2 entryPoint:(id)arg3 logger:(id)arg4 pageId:(id)arg5 editCallback:(CDUnknownBlockType)arg6;
- (void)launchPromoteOrLoginFlowWithMediaId:(id)arg1 isSubflow:(_Bool)arg2 couponOfferId:(id)arg3 destinationType:(long long)arg4 fromViewController:(id)arg5 logger:(id)arg6 entryPoint:(long long)arg7 aymtChannel:(id)arg8 isCTWAUpsell:(_Bool)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (id)initWithUserSession:(id)arg1;

@end

