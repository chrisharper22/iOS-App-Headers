//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class FLAnimatedImageData, FLAnimatedImageFrameCache, NSDictionary, UIImage;
@protocol FLAnimatedImageFrameDataSource;

@interface FLAnimatedImage : NSObject <NSCopying>
{
    FLAnimatedImageFrameCache *_frameCache;
    unsigned long long _loopCount;
    NSDictionary *_delayTimesForIndexes;
    unsigned long long _frameCount;
    FLAnimatedImageData *_data;
    id <FLAnimatedImageFrameDataSource> _frameDataSource;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FLAnimatedImageFrameDataSource> frameDataSource; // @synthesize frameDataSource=_frameDataSource;
@property(readonly, nonatomic) FLAnimatedImageData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) NSDictionary *delayTimesForIndexes; // @synthesize delayTimesForIndexes=_delayTimesForIndexes;
@property(readonly, nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)description;
- (id)synchronousImageAtIndex:(unsigned long long)arg1;
- (id)imageLazilyCachedAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIImage *posterImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithData:(id)arg1 size:(struct CGSize)arg2 loopCount:(unsigned long long)arg3 frameCount:(unsigned long long)arg4 skippedFrameCount:(unsigned long long)arg5 delayTimesForIndexes:(id)arg6 posterImage:(id)arg7 posterImageFrameIndex:(unsigned long long)arg8 frameDataSource:(id)arg9;
- (double)defaultFrameInterval;
- (double)frameDelayGreatestCommonDivisor;
@property(readonly, nonatomic) double durationInSeconds;

@end

