//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGLiveQuestionSetSectionControllerDelegate-Protocol.h"
#import "IGLiveQuestionSheetViewDelegate-Protocol.h"
#import "IGLiveQuestionsManagerListener-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"

@class IGLabelItemViewModel, IGListAdapter, IGLiveBroadcastLogger, IGLivePreLiveConfiguration, IGLiveQuestionSheetView, IGUserSession, NSString;
@protocol IGLiveQuestionSheetViewControllerDelegate;

@interface IGLiveQuestionSheetViewController : IGViewController <IGLiveQuestionSetSectionControllerDelegate, IGListAdapterDataSource, IGLiveQuestionsManagerListener, IGLiveQuestionSheetViewDelegate, IGGestureHandler, IGPartialModalSheetListener>
{
    IGUserSession *_userSession;
    IGLiveQuestionSheetView *_questionSheetView;
    unsigned long long _entryPoint;
    IGListAdapter *_listAdapter;
    IGLabelItemViewModel *_listHeaderLabelItemViewModel;
    IGLiveBroadcastLogger *_logger;
    IGLivePreLiveConfiguration *_preLiveConfiguration;
    id <IGLiveQuestionSheetViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveQuestionSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)questionSheetViewDidTapMoreButton:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)liveQuestionControllerDidSelectQuestion:(id)arg1;
- (void)liveQuestionsManagerDidFetchNewQuestions:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 isBroadcasting:(_Bool)arg3 preLiveConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

