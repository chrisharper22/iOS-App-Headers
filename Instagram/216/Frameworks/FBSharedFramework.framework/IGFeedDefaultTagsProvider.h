//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFeedTagsProvider-Protocol.h>

@class IGFBUserTagGroup, IGFundraiserTagGroup, IGNftTagGroup, IGProductItemTagGroup, IGUpcomingEventTagGroup, IGUsertagGroup, NSString;

@interface IGFeedDefaultTagsProvider : NSObject <IGFeedTagsProvider>
{
    IGUsertagGroup *_userTags;
    IGProductItemTagGroup *_productItemTags;
    IGFBUserTagGroup *_fbUserTags;
    IGUpcomingEventTagGroup *_upcomingEventTags;
    IGFundraiserTagGroup *_fundraiserTags;
    IGNftTagGroup *_nftTags;
}

- (void).cxx_destruct;
- (_Bool)hasNftTags;
- (_Bool)hasFundraiserTags;
- (_Bool)hasUpcomingEventTags;
- (_Bool)hasUserTags;
- (_Bool)hasProductTags;
- (id)nftTags;
- (id)fundraiserTags;
- (id)upcomingEventTags;
- (id)userTags;
- (id)productItemTags;
- (id)fbUserTags;
- (id)initWithUsertags:(id)arg1 productItemTags:(id)arg2 fbUserTags:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

