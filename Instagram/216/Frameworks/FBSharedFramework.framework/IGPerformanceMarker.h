//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGPerformanceLoggable-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol IGPerformanceLoggerDelegate, IGQPLNetworkingActiveJoinerAnnouncer;

@interface IGPerformanceMarker : NSObject <IGPerformanceLoggable>
{
    long long _restartOption;
    int _cancelLogic;
    id <IGQPLNetworkingActiveJoinerAnnouncer> _joinAnnouncer;
    double _markerStartEpochTimestamp;
    NSString *_serverJoinID;
    _Bool _isActive;
    _Bool _hasStarted;
    NSMutableDictionary *_defaultAnnotations;
    CDUnknownBlockType _instanceKeyGenerator;
    int _markerID;
    int _instanceKey;
    id <IGPerformanceLoggerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int instanceKey; // @synthesize instanceKey=_instanceKey;
@property(readonly, nonatomic) int markerID; // @synthesize markerID=_markerID;
@property(nonatomic) __weak id <IGPerformanceLoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addMemoryLogging;
- (_Bool)isActiveAndSampled;
- (_Bool)isActive;
- (void)drop;
- (void)endWithActionID:(short)arg1;
- (void)cancel;
- (void)failWithReason:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)fail;
- (void)success;
- (void)addDefaultAnnotationKey:(id)arg1 numberValue:(id)arg2;
- (void)addDefaultAnnotationKey:(id)arg1 boolValue:(_Bool)arg2;
- (void)addDefaultAnnotationKey:(id)arg1 stringValue:(id)arg2;
- (void)addAnnotationsFromDictionary:(id)arg1;
- (void)addAnnotationKey:(id)arg1 numberValue:(id)arg2;
- (void)addAnnotationKey:(id)arg1 boolValue:(_Bool)arg2;
- (void)addAnnotationKey:(id)arg1 stringValue:(id)arg2;
- (void)addPointWithName:(id)arg1 timestamp:(long long)arg2;
- (void)addPointWithName:(id)arg1 dataString:(id)arg2;
- (void)addPointWithName:(id)arg1;
- (void)cleanupJoinInfoForComponentName:(id)arg1 joinURLType:(unsigned long long)arg2;
- (void)registerJoinInfoForComponentName:(id)arg1 joinURLType:(unsigned long long)arg2;
- (void)start;
- (id)initWithMarkerID:(int)arg1 restartOption:(long long)arg2 joinAnnouncer:(id)arg3 cancelOnBackground:(_Bool)arg4;
- (id)initWithMarkerID:(int)arg1 restartOption:(long long)arg2 instanceKeyGenerator:(CDUnknownBlockType)arg3;
- (id)initWithMarkerID:(int)arg1 restartOption:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

