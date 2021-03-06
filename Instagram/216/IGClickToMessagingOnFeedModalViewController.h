//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGClickToMessagingOnFeedIcebreakerListSectionControllerDelegate-Protocol.h"
#import "IGClickToMessagingOnFeedSendMessageButtonViewDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGGrowingTextViewDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"

@class IGClickToMessagingAdsLogger, IGClickToMessagingOnFeedContext, IGClickToMessagingOnFeedHeaderView, IGClickToMessagingOnFeedViewModel, IGClickToMessagingOnFeedWelcomeMessageView, IGDirectThreadService, IGListAdapter, NSArray, NSString, UICollectionView, UIView;

@interface IGClickToMessagingOnFeedModalViewController : IGViewController <IGClickToMessagingOnFeedIcebreakerListSectionControllerDelegate, IGClickToMessagingOnFeedSendMessageButtonViewDelegate, IGListAdapterDataSource, IGGrowingTextViewDelegate, IGGestureHandler, IGPartialModalSheetListener>
{
    IGClickToMessagingOnFeedViewModel *_viewModel;
    IGClickToMessagingOnFeedContext *_context;
    IGClickToMessagingOnFeedHeaderView *_headerView;
    IGClickToMessagingOnFeedWelcomeMessageView *_welcomeMessageView;
    UIView *_footerView;
    UICollectionView *_icebreakerView;
    IGListAdapter *_icebreakerListAdapter;
    NSArray *_iceBreakerMessages;
    long long _selectedIceBreakerIndex;
    IGClickToMessagingAdsLogger *_logger;
    _Bool _isOnFeedRendered;
    IGDirectThreadService *_threadService;
}

- (void).cxx_destruct;
- (void)_createThreadAndSendMessageWithText:(id)arg1;
- (void)_updateComposerSendButton:(id)arg1;
- (void)_createSendMessageButtonView;
- (void)_onSendButtonClick:(id)arg1;
- (void)_createComposerView;
- (void)_logIceBreakerOrCustomMessageClick;
- (id)_icebreakerListModel;
- (double)_heightOfSubviews;
- (void)growingTextView:(id)arg1 didChangeHeight:(double)arg2;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(double)arg2;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)icebreakerListSectionController:(id)arg1 didRenderIcebreakerAtIndex:(long long)arg2;
- (void)icebreakerListSectionController:(id)arg1 didTapCell:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didTapOnFeedSendMessageButton:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_setupFooterView;
- (void)_setUpIcebreakerViewAndAdapter;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 onFeedViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

