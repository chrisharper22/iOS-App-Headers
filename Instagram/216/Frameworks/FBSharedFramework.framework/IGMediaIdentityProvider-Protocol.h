//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGUpcomingEvent, IGUpcomingEventLiveMetadata;

@protocol IGMediaIdentityProvider <NSObject>
- (_Bool)isNftMedia;
- (_Bool)hasFundraiserTag;
- (IGUpcomingEventLiveMetadata *)upcomingEventLiveMetadata;
- (IGUpcomingEvent *)upcomingEvent;
- (_Bool)hasMusicDrop;
- (_Bool)hasUpcomingEvent;
- (_Bool)isClipsMedia;
- (long long)itemMediaType;
- (long long)userTagCount;
- (_Bool)hasProductCollectionTag;
- (_Bool)hasVisibleProductTags;
- (_Bool)isUserTaggedMedia;
- (_Bool)isProductTaggedMedia;
- (_Bool)isIGTVMedia;
@end

