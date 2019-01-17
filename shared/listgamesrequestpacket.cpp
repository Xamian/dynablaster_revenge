//
// C++ Implementation: ListGamesRequestPacket
//
// Description:
//
//
// Author: Matthias Varnholt <matto@gmx.de>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//

// header
#include "listgamesrequestpacket.h"

// Qt
#include <QDataStream>

// defines
#define PACKETNAME "ListGameRequest"


//-----------------------------------------------------------------------------
/*!
*/
ListGamesRequestPacket::ListGamesRequestPacket()
   : Packet(Packet::LISTGAMESREQUEST)
{
   mPacketName = PACKETNAME;
}


//-----------------------------------------------------------------------------
/*!
   destructor
*/
ListGamesRequestPacket::~ListGamesRequestPacket()
{
}


//-----------------------------------------------------------------------------
/*!
   \param out datastream to write members to
*/
void ListGamesRequestPacket::enqueue(QDataStream & /*out*/)
{
}


//-----------------------------------------------------------------------------
/*!
   \param in datastream read members from
*/
void ListGamesRequestPacket::dequeue(QDataStream & /*in*/)
{
}


//-----------------------------------------------------------------------------
/*!
   debug output of members
*/
void ListGamesRequestPacket::debug()
{
   // debug output login request
   qDebug(
      "ListGamesRequestPacket:debug: no members"
   );
}

