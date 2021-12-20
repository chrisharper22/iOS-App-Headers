//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedTagsProvider-Protocol.h"

@class IGProductItemTagGroup, NSString;

@interface IGSundialShoppingTagsProvider : NSObject <IGFeedTagsProvider>
{
    IGProductItemTagGroup *_productItemTags;
}

- (void).cxx_destruct;
- (_Bool)hasNftTags;
- (_Bool)hasFundraiserTags;
- (_Bool)hasUpcomingEventTags;
- (_Bool)hasProductTags;
- (_Bool)hasUserTags;
- (id)nftTags;
- (id)fundraiserTags;
- (id)upcomingEventTags;
- (id)productItemTags;
- (id)userTags;
- (id)fbUserTags;
- (id)initWithVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

