//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface IGNavigationChain : NSObject
{
    NSMutableArray *_chain;
    NSString *_cached;
    long long _maxItemsKeptFromBottom;
    long long _maxItemsKeptFromTop;
    _Bool _isClickPointEnabled;
}

- (void).cxx_destruct;
- (id)_formatEndpoint:(id)arg1;
@property(readonly, nonatomic) NSString *chain;
- (_Bool)pop;
- (id)peek;
- (void)push:(id)arg1;
- (id)init;

@end

