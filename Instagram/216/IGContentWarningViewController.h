//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGContentWarningBodyViewDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"

@class IGBottomButtonsView, IGUserSession, NSMutableArray, NSString, UILabel, UIScrollView;
@protocol IGContentWarningViewControllerDelegate;

@interface IGContentWarningViewController : IGViewController <IGContentWarningBodyViewDelegate, IGGestureHandler>
{
    UIScrollView *_containerView;
    UILabel *_titleLabel;
    NSMutableArray *_bodyViewsArray;
    IGBottomButtonsView *_bottomButtonsView;
    IGUserSession *_userSession;
    NSString *_presentingViewControllerModule;
    id <IGContentWarningViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGContentWarningViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)contentWarningBodyView:(id)arg1 didTapURL:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 presentingViewControllerModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

