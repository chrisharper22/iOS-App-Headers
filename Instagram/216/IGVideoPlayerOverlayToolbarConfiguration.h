//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol IGVideoPlayerOverlayToolbarItem;

@interface IGVideoPlayerOverlayToolbarConfiguration : NSObject
{
    NSArray<IGVideoPlayerOverlayToolbarItem> *_leftItems;
    NSArray<IGVideoPlayerOverlayToolbarItem> *_rightItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray<IGVideoPlayerOverlayToolbarItem> *rightItems; // @synthesize rightItems=_rightItems;
@property(readonly, nonatomic) NSArray<IGVideoPlayerOverlayToolbarItem> *leftItems; // @synthesize leftItems=_leftItems;
- (id)initWithLeftItems:(id)arg1 rightItems:(id)arg2;

@end
