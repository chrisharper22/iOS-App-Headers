//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGShoppingObjectsCache;

@interface IGBusinessDiversityInfoCache : NSObject
{
    unsigned long long _cacheTTL;
    IGShoppingObjectsCache *_internalCache;
}

- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithTTL:(unsigned long long)arg1;

@end
