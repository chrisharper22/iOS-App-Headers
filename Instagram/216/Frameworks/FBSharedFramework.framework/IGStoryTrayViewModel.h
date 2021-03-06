//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGPhotosRenderedTracking-Protocol.h>
#import <FBSharedFramework/IGSimpleTrackableObject-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGStoryTrayViewModel : IGValueObject <IGPhotosRenderedTracking, IGSimpleTrackableObject, IGListDiffable, NSCopying, NSCoding>
{
}

+ (void)initialize;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (long long)mediaType;
- (id)imageLoggingIdentifier;
- (id)pk;
- (id)coverImageURLForWidth:(double)arg1;
- (id)previewImageURLForSize:(struct CGSize)arg1;
- (_Bool)isKindOfHighlight;
- (_Bool)isKindOfStory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

