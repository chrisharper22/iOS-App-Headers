//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGImageFilter.h>

@class IGSurface;

@interface IGAntiLuxFilter : IGImageFilter
{
    IGSurface *_blurredSurface;
    IGSurface *_claheCDF;
    double _filterStrength;
}

- (void).cxx_destruct;
@property(nonatomic) double filterStrength; // @synthesize filterStrength=_filterStrength;
@property(retain, nonatomic) IGSurface *claheCDF; // @synthesize claheCDF=_claheCDF;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)render:(id)arg1 to:(id)arg2;
- (void)configureProgram:(id)arg1;
- (id)fragmentShader;
- (id)fragmentFunctions;
- (id)samplers;
- (id)init;

@end

