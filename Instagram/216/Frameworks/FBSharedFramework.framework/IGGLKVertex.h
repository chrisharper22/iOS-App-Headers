//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray;

@interface IGGLKVertex : NSObject <NSCopying>
{
    NSArray *_attributes;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToVertex:(id)arg1;
- (id)initWithAttributes:(id)arg1;

@end

