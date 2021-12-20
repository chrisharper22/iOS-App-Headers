//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectScrollCoordinator, IGDirectThreadKey, IGListAdapter;
@protocol IGDirectOutgoingUpdateSending, IGDirectThreadLastSeenMessageTrackerDataSource, IGUserFeatureSets;

@interface IGDirectThreadLastSeenMessageTracker : NSObject
{
    IGDirectThreadKey *_threadKey;
    id <IGDirectThreadLastSeenMessageTrackerDataSource> _dataSource;
    IGListAdapter *_listAdapter;
    id <IGDirectOutgoingUpdateSending> _outgoingUpdateSender;
    IGDirectScrollCoordinator *_scrollCoordinator;
    id <IGUserFeatureSets> _featureSets;
    _Bool _isTracking;
}

- (void).cxx_destruct;
- (void)_markThreadAsSeenForMessageMetadata:(id)arg1 shhMessageMetadata:(id)arg2;
- (_Bool)_shouldUpdateMessageMark;
- (id)_visibleObjectsInCollectionView;
- (id)_lastSeenMessageMetadataWithIsShhMessage:(_Bool)arg1;
- (void)markLastMessageAsSeen;
- (void)updateLastSeenMessage;
- (void)stopTracking;
- (void)beginTracking;
- (id)initWithThreadKey:(id)arg1 dataSource:(id)arg2 listAdapter:(id)arg3 outgoingUpdateSender:(id)arg4 scrollCoordinator:(id)arg5 featureSets:(id)arg6;

@end
