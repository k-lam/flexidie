//
//  Participant.h
//  ProtocolBuilder
//
//  Created by Pichaya Srifar on 8/29/11.
//  Copyright 2011 Vervata. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Participant : NSObject {
	NSString *name;
	NSString *UID;
}
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *UID;

@end
