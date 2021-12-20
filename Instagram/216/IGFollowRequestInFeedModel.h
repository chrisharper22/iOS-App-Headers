//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"
#import "IGNetegoItem-Protocol.h"

@class IGAdPlatformGapRules, NSArray, NSString;

@interface IGFollowRequestInFeedModel : NSObject <IGListDiffable, IGNetegoItem>
{
    IGAdPlatformGapRules *_gapRules;
    unsigned long long _viewStateItemType;
    _Bool _isHorizontalScrollUnit;
    NSString *_pk;
    NSString *_trackingToken;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isHorizontalScrollUnit; // @synthesize isHorizontalScrollUnit=_isHorizontalScrollUnit;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSString *trackingToken; // @synthesize trackingToken=_trackingToken;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, nonatomic) IGAdPlatformGapRules *gapRules;
- (unsigned long long)serverViewStateItemType;
- (unsigned long long)unitItemType;
- (id)unitItemId;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithPk:(id)arg1 items:(id)arg2 trackingToken:(id)arg3 gapRules:(id)arg4 isHorizontalScrollUnit:(_Bool)arg5 viewStateItemType:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

