//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDirectScrollingTabChildViewControllerProtocol-Protocol.h"

@class IGTapButton, IGUserSession, NSString, UILabel;
@protocol IGCollageTabViewControllerDelegate;

@interface IGCollageTabViewController : IGViewController <IGDirectScrollingTabChildViewControllerProtocol>
{
    IGUserSession *_userSession;
    id <IGCollageTabViewControllerDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    IGTapButton *_startButton;
    _Bool _useCustomContentInsets;
    double _bottomInset;
}

- (void).cxx_destruct;
- (void)_handleTap;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)containerDidTapSend;
- (void)containerDidUpdateBottomInset:(double)arg1;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

