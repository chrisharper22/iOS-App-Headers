//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGTVCardLiveVideoMetadataViewModel, IGTVCardVideoMetadataViewModel;

@interface IGTVCardMetadataViewModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGTVCardVideoMetadataViewModel *_media_videoViewModel;
    IGTVCardLiveVideoMetadataViewModel *_broadcast_liveVideoViewModel;
}

+ (id)mediaWithVideoViewModel:(id)arg1;
+ (id)broadcastWithLiveVideoViewModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchMedia:(CDUnknownBlockType)arg1 broadcast:(CDUnknownBlockType)arg2;

@end

