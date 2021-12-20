//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGAvatarEffectUpsellViewControllerDelegate-Protocol.h"
#import "IGNavigationControllerDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"

@class IGAvatarEffectUpsellViewController, IGPartialModalSheetViewController, IGUserSession, IGVideoCallLoggingContext, NSString, UIViewController;
@protocol IGAvatarEffectUpsellPresenterDelegate;

@interface IGAvatarEffectUpsellPresenter : NSObject <IGAvatarEffectUpsellViewControllerDelegate, IGNavigationControllerDelegate, IGPartialModalSheetListener>
{
    IGAvatarEffectUpsellViewController *_avatarEffectUpsellViewController;
    IGPartialModalSheetViewController *_modalSheetViewController;
    IGUserSession *_userSession;
    IGVideoCallLoggingContext *_loggingContext;
    id <IGAvatarEffectUpsellPresenterDelegate> _delegate;
    UIViewController *_presentedViewController;
    _Bool _isUpsellBeingPresented;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAvatarEffectUpsellPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)avatarEffectUpsellViewControllerDidTapMakeYourAvatarButton;
- (void)avatarEffectUpsellViewControllerDidTapNotNowButton;
- (void)_didTapCloseButton;
- (void)_dismissUpsell;
- (void)presentAvatarUpsellFromPresentingViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1 loggingContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

