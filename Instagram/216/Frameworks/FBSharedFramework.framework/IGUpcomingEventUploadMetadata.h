//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGShoppingFormatsCreationUploadMetadata, IGUpcomingMusicEventMetadata;

@interface IGUpcomingEventUploadMetadata : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGUpcomingMusicEventMetadata *_musicDrop_musicMetadata;
    IGShoppingFormatsCreationUploadMetadata *_scheduledLive_shoppingMetadata;
    unsigned long long _scheduledLive_audienceType;
}

+ (id)scheduledLiveWithShoppingMetadata:(id)arg1 audienceType:(unsigned long long)arg2;
+ (id)none;
+ (id)musicDropWithMusicMetadata:(id)arg1;
- (void).cxx_destruct;
- (void)matchNone:(CDUnknownBlockType)arg1 musicDrop:(CDUnknownBlockType)arg2 scheduledLive:(CDUnknownBlockType)arg3;

@end

