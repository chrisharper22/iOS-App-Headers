//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterUpdateListener-Protocol.h"
#import "IGLiveAcceptRequestDataSourceDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"

@class IGListAdapter, IGLiveAcceptRequestSheetDataSource, IGLiveAcceptRequestSheetView, IGLiveBroadcastLogger, IGLiveRequestToJoinPuller, IGUserSession, NSArray, NSString;
@protocol IGLiveAcceptRequestSheetViewControllerDelegate;

@interface IGLiveAcceptRequestSheetViewController : IGViewController <IGLiveAcceptRequestDataSourceDelegate, IGListAdapterUpdateListener, IGGestureHandler, IGPartialModalSheetListener>
{
    IGUserSession *_userSession;
    IGLiveBroadcastLogger *_logger;
    IGLiveAcceptRequestSheetView *_acceptRequestSheetView;
    IGListAdapter *_listAdapter;
    IGLiveRequestToJoinPuller *_requestToJoinPuller;
    IGLiveAcceptRequestSheetDataSource *_dataSource;
    NSArray *_requestedUsers;
    double _minExpandHeightThreshold;
    id <IGLiveAcceptRequestSheetViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveAcceptRequestSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)liveAcceptRequestSheetDataSource:(id)arg1 didAcceptRequestFromUser:(id)arg2;
- (void)listAdapter:(id)arg1 didFinishUpdate:(long long)arg2 animated:(_Bool)arg3;
- (void)_updatePreferredContentSize;
- (void)_setRequestedUsers:(id)arg1;
- (void)_didLoadRequestedUsers:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 broadcastId:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
