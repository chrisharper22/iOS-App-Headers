//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGEntityAtRange : NSObject <NSCoding, NSCopying>
{
    unsigned long long _hash;
    long long _offset;
    long long _length;
    NSString *_url;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) long long length; // @synthesize length=_length;
@property(readonly, nonatomic) long long offset; // @synthesize offset=_offset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOffset:(long long)arg1 length:(long long)arg2 url:(id)arg3;

@end
