//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol MTLLibrary;

@interface IGGLKLibrary : NSObject
{
    NSMutableDictionary *_functionCache;
    id <MTLLibrary> _backingLibrary;
}

+ (id)libraryWithMetalLibrary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <MTLLibrary> backingLibrary; // @synthesize backingLibrary=_backingLibrary;
- (id)metalFunctionForFunction:(id)arg1;
- (id)initWithMetalLibrary:(id)arg1;

@end
