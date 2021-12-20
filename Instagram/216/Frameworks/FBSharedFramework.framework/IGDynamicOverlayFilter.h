//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGFilter.h>

@class IGImageFilter, NSArray;

@interface IGDynamicOverlayFilter : IGFilter
{
    IGImageFilter *_blitFilter;
    IGImageFilter *_overlayFilter;
    NSArray *_dynamicOverlays;
}

+ (id)filterName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *dynamicOverlays; // @synthesize dynamicOverlays=_dynamicOverlays;
@property(readonly, nonatomic) IGImageFilter *overlayFilter; // @synthesize overlayFilter=_overlayFilter;
@property(readonly, nonatomic) IGImageFilter *blitFilter; // @synthesize blitFilter=_blitFilter;
- (void)render:(id)arg1 to:(id)arg2;
- (id)initWithDynamicOverlayModels:(id)arg1;

@end

