//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IGQPEntity : NSObject
{
    NSDictionary *_params;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void)parseParameters:(id)arg1;
- (_Bool)isValid;
- (id)initWithDictionary:(id)arg1;

@end

