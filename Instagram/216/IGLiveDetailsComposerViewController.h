//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGLiveDetailsComposerViewDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"

@class IGLiveDetailsComposerView, IGUserSession, NSArray, NSString;
@protocol IGLiveDetailsComposerViewControllerDelegate;

@interface IGLiveDetailsComposerViewController : IGViewController <IGLiveDetailsComposerViewDelegate, IGPartialModalSheetListener, IGGestureHandler>
{
    IGUserSession *_userSession;
    NSString *_title;
    NSArray *_taggedPartners;
    IGLiveDetailsComposerView *_composerView;
    id <IGLiveDetailsComposerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveDetailsComposerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)liveDetailsComposerViewDidTapTagBusinessPartner:(id)arg1 withTitle:(id)arg2 taggedPartners:(id)arg3;
- (void)liveDetailsComposerViewDidTapAddTitleButton:(id)arg1 withTitle:(id)arg2 taggedPartners:(id)arg3;
- (struct CGSize)preferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 title:(id)arg2 taggedPartners:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

