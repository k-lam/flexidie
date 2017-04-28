/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

@class NSDate, NSString, Conversation, NSData, PhoneNumberIndex, ViberLocation, NSNumber, Attachment;

__attribute__((visibility("hidden")))
@interface ViberMessage : NSObject {
}
@property(retain, nonatomic) ViberLocation* location;
@property(retain, nonatomic) PhoneNumberIndex* phoneNumIndex;
@property(retain, nonatomic) Attachment* attachment;
@property(retain, nonatomic) Conversation* conversation;
@property(retain, nonatomic) NSData* emoticonsRanges;
@property(retain, nonatomic) NSNumber* deliveredCount;
@property(retain, nonatomic) NSString* text;
@property(retain, nonatomic) NSNumber* token;
@property(retain, nonatomic) NSDate* date;
@property(retain, nonatomic) NSData* ranges;
@property(retain, nonatomic) NSNumber* seq;
@property(retain, nonatomic) NSString* systemType;
@property(retain, nonatomic) NSDate* stateDate;
@property(retain, nonatomic) NSNumber* isSearchByName;
@property(retain, nonatomic) NSString* state;
@property(retain, nonatomic) NSString* mediaType;
@property(readonly, assign, nonatomic) BOOL isSystem;
-(id)locationPreviewPath;
-(void)setAddress:(id)address;
-(id)address;
-(void)setCllocation:(id)cllocation;
-(id)cllocation;
@end

