//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGQPEntity.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface IGQPTemplateParameter : IGQPEntity <NSCoding>
{
    _Bool _required;
    NSString *_name;
    NSString *_stringValue;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) _Bool required; // @synthesize required=_required;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isValid;
- (void)parseParameters:(id)arg1;

@end

