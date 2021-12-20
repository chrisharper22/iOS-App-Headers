//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>

@class NSString;
@protocol IGTimedObject;

@interface IGVideoLayerListItem : NSObject <IGListDiffable>
{
    id <IGTimedObject> _timedObject;
    NSString *_previewText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *previewText; // @synthesize previewText=_previewText;
@property(readonly, nonatomic) id <IGTimedObject> timedObject; // @synthesize timedObject=_timedObject;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTimedObject:(id)arg1 previewText:(id)arg2;

@end
