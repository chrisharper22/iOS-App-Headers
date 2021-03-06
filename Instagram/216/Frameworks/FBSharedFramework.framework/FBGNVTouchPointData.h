//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBGNVContentMetadata, NSArray, NSDate, NSMutableArray, NSString, UIView;

@interface FBGNVTouchPointData : NSObject
{
    NSMutableArray *_trackingNodes;
    NSMutableArray *_trackingModels;
    NSMutableArray *_modules;
    NSMutableArray *_classNames;
    NSMutableArray *_touchTraces;
    int _genericClickIndex;
    UIView *_touchedWindow;
    NSString *_sessionId;
    NSDate *_lastUpdateTimestamp;
    NSDate *_initialUpdateTimestamp;
    double _touchMoveThreshold;
    NSString *_genericClickTargetDescription;
    FBGNVContentMetadata *_genericClickContentMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FBGNVContentMetadata *genericClickContentMetadata; // @synthesize genericClickContentMetadata=_genericClickContentMetadata;
@property(readonly, nonatomic) int genericClickIndex; // @synthesize genericClickIndex=_genericClickIndex;
@property(readonly, nonatomic) NSString *genericClickTargetDescription; // @synthesize genericClickTargetDescription=_genericClickTargetDescription;
@property(readonly, nonatomic) double touchMoveThreshold; // @synthesize touchMoveThreshold=_touchMoveThreshold;
@property(readonly, nonatomic) NSDate *initialUpdateTimestamp; // @synthesize initialUpdateTimestamp=_initialUpdateTimestamp;
@property(readonly, nonatomic) NSDate *lastUpdateTimestamp; // @synthesize lastUpdateTimestamp=_lastUpdateTimestamp;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) __weak UIView *touchedWindow; // @synthesize touchedWindow=_touchedWindow;
- (void)resetGenericClickMetadata;
- (void)setGenericClickContentMetadata:(id)arg1;
- (void)setGenericClickInex:(int)arg1;
- (void)setGenericClickTargetDescription:(id)arg1;
- (id)toucheTraces;
- (long long)currentTouchPhase;
- (struct CGPoint)currentTouchLocation;
- (_Bool)hasSponsoredData;
- (void)addTouchWithUpdatedPhase:(long long)arg1 location:(struct CGPoint)arg2 isInView:(_Bool)arg3;
- (void)addRelatedClassNames:(id)arg1;
- (void)addModule:(id)arg1;
- (void)addTrackingModel:(id)arg1;
- (void)addTrackingNodes:(id)arg1;
- (void)injectTrackingNode:(id)arg1;
@property(readonly, nonatomic) NSArray *classNames;
@property(readonly, nonatomic) NSArray *modules;
@property(readonly, nonatomic) NSArray *trackingModels;
@property(readonly, nonatomic) NSArray *trackingNodes;
- (id)initWithSessionId:(id)arg1 touchLocation:(struct CGPoint)arg2 touchedWindow:(id)arg3 touchPhase:(long long)arg4 touchMoveThreshold:(double)arg5;

@end

