//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDynamicOverlayImageProvider-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;

@interface IGStoryAnimatedStickerViewSnapshotProvider : NSObject <NSSecureCoding, IGDynamicOverlayImageProvider>
{
    double _duration;
    double _frameRate;
    NSMutableArray *_frames;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) double frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (id)imageForTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStickerView:(id)arg1 duration:(double)arg2 frameRate:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

