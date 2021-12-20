//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGLiveAddonConforming-Protocol.h"
#import "IGLiveHeaderSheetDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"

@class IGListAdapter, IGLiveBroadcastLogger, IGLiveHeaderHostSheetListDataSource, IGLiveHeaderSheetView, IGUser, IGUserSession, NSArray, NSString;
@protocol IGLiveAddonCoordinating, IGLiveHeaderHostSheetViewControllerDelegate;

@interface IGLiveHeaderHostSheetViewController : IGViewController <IGLiveHeaderSheetDelegate, IGGestureHandler, IGLiveAddonConforming, IGPartialModalSheetListener>
{
    IGUserSession *_userSession;
    IGLiveHeaderSheetView *_headerSheetView;
    IGLiveHeaderHostSheetListDataSource *_dataSource;
    IGListAdapter *_guestListAdapter;
    NSString *_title;
    long long _maxNumberOfGuests;
    _Bool _showViewerList;
    _Bool _passUnifiedActionSheetQE;
    _Bool _checkedUnifiedActionSheetQE;
    _Bool _canAssignModerator;
    NSString *_broadcastId;
    IGLiveBroadcastLogger *_logger;
    _Bool _disabled;
    _Bool _addonLifeCycleEventEnabled;
    id <IGLiveAddonCoordinating> _coordinator;
    NSString *_identifier;
    id <IGLiveHeaderHostSheetViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveHeaderHostSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool addonLifeCycleEventEnabled; // @synthesize addonLifeCycleEventEnabled=_addonLifeCycleEventEnabled;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <IGLiveAddonCoordinating> coordinator; // @synthesize coordinator=_coordinator;
- (id)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)receiveEvent:(unsigned long long)arg1 from:(id)arg2 payload:(id)arg3;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)userPayUpdate:(id)arg1;
- (void)_presentActionSheetForUser:(id)arg1 module:(id)arg2;
- (void)_disableViewer:(id)arg1;
- (void)headerSheetItem:(id)arg1 didTakeAction:(unsigned long long)arg2 onUser:(id)arg3;
- (void)_updateDataSource;
- (void)viewDidLoad;
- (void)loadView;
- (void)setGuestState:(long long)arg1 forGuestId:(id)arg2;
- (long long)guestStateForGuestId:(id)arg1;
- (id)_guestForGuestId:(id)arg1;
@property(copy, nonatomic) NSArray *viewers; // @dynamic viewers;
- (void)setGuests:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *guests; // @dynamic guests;
@property(readonly, nonatomic) IGUser *host;
- (id)initWithUserSession:(id)arg1 guests:(id)arg2 taggedPartners:(id)arg3 title:(id)arg4 sectionTitle:(id)arg5 maxNumberOfGuests:(long long)arg6 showViewerList:(_Bool)arg7 showEarnings:(_Bool)arg8 canAssignModerator:(_Bool)arg9 broadcastId:(id)arg10 logger:(id)arg11 analyticsModule:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *taggedPartners; // @dynamic taggedPartners;

@end

