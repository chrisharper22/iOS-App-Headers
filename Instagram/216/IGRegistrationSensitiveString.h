//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface IGRegistrationSensitiveString : NSObject <NSCopying>
{
    NSString *_sensitiveString;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *sensitiveString; // @synthesize sensitiveString=_sensitiveString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithString:(id)arg1;

@end

