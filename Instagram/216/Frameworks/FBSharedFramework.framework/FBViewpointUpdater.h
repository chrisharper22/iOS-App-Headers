//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBViewpointEngine, FBViewpointKeyboardTrackable, FBViewpointStatusBarTrackable;

@interface FBViewpointUpdater : NSObject
{
    FBViewpointEngine *_engine;
    FBViewpointKeyboardTrackable *_keyboardTrackable;
    FBViewpointStatusBarTrackable *_statusBarTrackable;
    vector_48bfb567 _calculatedViewport;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) vector_48bfb567 calculatedViewport; // @synthesize calculatedViewport=_calculatedViewport;
@property(nonatomic) _Bool paused;
- (id)impressionActionNames;
- (id)currentlyTrackedDataForActionNames:(id)arg1;
- (void)tickWithFrame:(struct CGRect)arg1 reason:(unsigned long long)arg2;
- (void)tickWithFrame:(struct CGRect)arg1;
- (double)lastImpressionTimeForActionKey:(id)arg1;
- (void)stopTrackingItem:(id)arg1;
- (void)stopTrackingItem:(id)arg1 withActions:(id)arg2;
- (void)startTrackingItem:(id)arg1 withActions:(id)arg2;
- (id)sharedApplicationIfAvailable;
- (id)initWithFancyOcclusionEnabled:(_Bool)arg1 debugOcclusionDetectionEnabled:(_Bool)arg2 dynamicLevelInferenceEnabled:(_Bool)arg3 distinctActionKeysEnabled:(_Bool)arg4 floatingPointRoundingFixEnabled:(_Bool)arg5;

@end
