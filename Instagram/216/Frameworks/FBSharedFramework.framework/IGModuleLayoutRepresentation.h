//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGModuleState, NSArray, NSMapTable, NSMutableDictionary, NSString;
@protocol IGModuleItemRanker;

@interface IGModuleLayoutRepresentation : NSObject
{
    NSMapTable *_identifierLookupTable;
    NSMutableDictionary *_multiResourceIdentifierLookupTable;
    id <IGModuleItemRanker> _ranker;
    _Bool _isMultiResourceEnabled;
    NSString *_analyticsModule;
    IGModuleState *_state;
    NSArray *_items;
    long long _surfaceType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long surfaceType; // @synthesize surfaceType=_surfaceType;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) IGModuleState *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
- (id)ranker;
- (id)updatedWithRanker:(id)arg1;
- (id)updatedWithResignedActiveItem:(id)arg1;
- (id)updatedWithActiveItem:(id)arg1;
- (id)stateByAddingItems:(id)arg1;
- (id)stateBySettingItems:(id)arg1;
- (id)itemMatchingIdentifier:(id)arg1;
- (id)initWithAnalyticsModule:(id)arg1 state:(id)arg2 allItems:(id)arg3 surfaceType:(long long)arg4 ranker:(id)arg5 identifierLookupTable:(id)arg6 multiResourceIdentifierLookupTable:(id)arg7 isMultiResourceEnabled:(_Bool)arg8;
- (id)initWithAnalyticsModule:(id)arg1 state:(id)arg2 allItems:(id)arg3 surfaceType:(long long)arg4 ranker:(id)arg5 isMultiResourceEnabled:(_Bool)arg6;
- (id)initWithAnalyticsModule:(id)arg1 allItems:(id)arg2 surfaceType:(long long)arg3 ranker:(id)arg4 isMultiResourceEnabled:(_Bool)arg5;

@end

