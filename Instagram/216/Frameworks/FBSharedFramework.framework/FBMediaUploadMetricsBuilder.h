//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FBMediaUploadMetricsBuilder : NSObject
{
    NSMutableDictionary *_attributes;
    unsigned int _numFailedAttempts;
    double _percentUploaded;
}

- (void).cxx_destruct;
- (id)build;
- (void)_finalizeMyCounters;
- (void)incrementNumFailedAttempts;
- (void)setPercentUploaded:(double)arg1;
- (void)setLogValues:(id)arg1;
- (void)setLogValueNumeric:(long long)arg1 forKey:(id)arg2;
- (void)setLogValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end
