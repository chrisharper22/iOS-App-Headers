//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface IGVideoCallUserKey : NSObject <NSCopying>
{
    NSString *_igid;
    NSString *_fbid;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fbid; // @synthesize fbid=_fbid;
@property(readonly, nonatomic) NSString *igid; // @synthesize igid=_igid;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIgid:(id)arg1 fbid:(id)arg2;

@end

