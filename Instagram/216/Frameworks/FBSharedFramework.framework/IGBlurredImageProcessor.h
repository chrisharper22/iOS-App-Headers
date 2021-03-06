//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGImageProcessor-Protocol.h>

@class NSString, UIColor;

@interface IGBlurredImageProcessor : NSObject <IGImageProcessor>
{
    double _blurRadius;
    unsigned long long _iterations;
    UIColor *_tintColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) unsigned long long iterations; // @synthesize iterations=_iterations;
@property(readonly, nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
- (_Bool)doesDecodeImage;
- (id)cacheKeyFragment;
- (id)cacheKeyURLFromURL:(id)arg1;
- (id)processedImageFromImage:(id)arg1;
- (id)init;
- (id)initWithBlurRadius:(double)arg1 iterations:(unsigned long long)arg2 tintColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

