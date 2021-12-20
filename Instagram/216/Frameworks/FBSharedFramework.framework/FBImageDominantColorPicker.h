//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface FBImageDominantColorPicker : NSObject
{
    char *_rawData;
    unsigned long long _pixelCount;
    NSSet *_paletteColors;
    struct mutex _paletteColorsLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_getOrComputePaletteColors;
- (id)_dominantColorsWithOptions:(long long)arg1;
- (id)dominantColorPaletteWithOptions:(long long)arg1;
- (id)dominantColorWithOptions:(long long)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1 maxPixelSize:(double)arg2;

@end

