//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGVideoPlayerOverlayToolbarConfiguration, NSArray;

@interface IGVideoPlayerOverlayConfiguration : NSObject
{
    NSArray *_overlays;
    IGVideoPlayerOverlayToolbarConfiguration *_topToolbarConfiguration;
    IGVideoPlayerOverlayToolbarConfiguration *_bottomToolbarConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGVideoPlayerOverlayToolbarConfiguration *bottomToolbarConfiguration; // @synthesize bottomToolbarConfiguration=_bottomToolbarConfiguration;
@property(readonly, nonatomic) IGVideoPlayerOverlayToolbarConfiguration *topToolbarConfiguration; // @synthesize topToolbarConfiguration=_topToolbarConfiguration;
@property(readonly, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
- (id)initWithOverlays:(id)arg1 topToolbarConfiguration:(id)arg2 bottomToolbarConfiguration:(id)arg3;

@end

