//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface RCTLocationRequest : NSObject
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _errorBlock;
    NSTimer *_timeoutTimer;
    struct RCTLocationOptions _options;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) struct RCTLocationOptions options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)dealloc;

@end

