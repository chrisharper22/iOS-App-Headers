//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGShoppingProductTileBanner : FBValueObject <NSCopying, NSCoding>
{
    NSString *_type;
    NSString *_text;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 text:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

