//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"
#import "IGNetegoItem-Protocol.h"

@class IGAdPlatformGapRules, NSArray, NSString;

@interface IGHScrollSuggestInvitesModel : NSObject <IGListDiffable, IGNetegoItem>
{
    NSString *_trackingToken;
    NSString *_pk;
    IGAdPlatformGapRules *_gapRules;
    unsigned long long _viewStateItemType;
    NSArray *_items;
    NSString *_title;
    NSString *_actionText;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) IGAdPlatformGapRules *gapRules;
- (id)trackingToken;
- (unsigned long long)type;
- (id)pk;
- (void)removeItemWithFBID:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (unsigned long long)serverViewStateItemType;
- (unsigned long long)unitItemType;
- (id)unitItemId;
- (id)initWithTitle:(id)arg1 items:(id)arg2 actionText:(id)arg3 trackingToken:(id)arg4 pk:(id)arg5 gapRules:(id)arg6 viewStateItemType:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

