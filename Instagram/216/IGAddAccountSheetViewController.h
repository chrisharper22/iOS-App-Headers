//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAddAccountSheetViewDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"

@class IGAddAccountSheetView, NSString;
@protocol IGAddAccountSheetViewControllerDelegate;

@interface IGAddAccountSheetViewController : IGViewController <IGAddAccountSheetViewDelegate, IGGestureHandler>
{
    IGAddAccountSheetView *_addAccountSheetView;
    id <IGAddAccountSheetViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAddAccountSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addAccountSheetViewDidTapLoginButton:(id)arg1;
- (void)addAccountSheetViewDidTapRegistrationButton:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
