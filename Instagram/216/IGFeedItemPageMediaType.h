//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGFeedItemMediaCell;
@protocol IGModernFeedAudioCompatible><IGModernFeedVideoCellType;

@interface IGFeedItemPageMediaType : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGFeedItemMediaCell<IGModernFeedAudioCompatible><IGModernFeedVideoCellType> *_modernVideo_cell;
}

+ (id)other;
+ (id)modernVideoWithCell:(id)arg1;
- (void).cxx_destruct;
- (void)matchOther:(CDUnknownBlockType)arg1 modernVideo:(CDUnknownBlockType)arg2;

@end
