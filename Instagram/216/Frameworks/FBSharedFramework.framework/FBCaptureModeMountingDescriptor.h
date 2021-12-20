//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol FBMPInput;

@interface FBCaptureModeMountingDescriptor : NSObject
{
    CDUnknownBlockType _shouldFilterDataForOutput;
    _Bool _shouldLockFilters;
    _Bool _shouldClearFilters;
    id <FBMPInput> _input;
    NSArray *_outputs;
    NSArray *_filters;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldClearFilters; // @synthesize shouldClearFilters=_shouldClearFilters;
@property(readonly, nonatomic) _Bool shouldLockFilters; // @synthesize shouldLockFilters=_shouldLockFilters;
@property(readonly, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) NSArray *outputs; // @synthesize outputs=_outputs;
@property(readonly, nonatomic) id <FBMPInput> input; // @synthesize input=_input;
- (_Bool)shouldFilterDataForOutput:(id)arg1;
- (id)initWithInput:(id)arg1 outputs:(id)arg2 filters:(id)arg3 shouldLockFilters:(_Bool)arg4;
- (id)initWithInput:(id)arg1 outputs:(id)arg2 filters:(id)arg3 shouldLockFilters:(_Bool)arg4 shouldClearFilters:(_Bool)arg5 shouldFilterDataForOutput:(CDUnknownBlockType)arg6;

@end

